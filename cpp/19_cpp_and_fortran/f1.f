*
* Calling Fortran routines from C++. A sample
* Fortran file
* Benigno 990205
*
      double precision function test( d )

      implicit none
      double precision d

      integer a(5,6)
      integer b(2,2)
      character*80 c1, c2
      common /fcom/ a, b, c1, c2

      integer i, j

      do i = 1, 5 
        do j = 1, 6
          a(i,j) = 10 * i + j
        enddo
      enddo

      do i = 1, 2
        do j = 1, 2
          b(i,j) = 100* i + j
        enddo
      enddo

      test = 2. * d

      return
      end

      subroutine testmore( e1, se1, e2, se2 )

      character*80 e1,  e2
      integer      se1, se2

      integer a(5,6)
      integer b(2,2)
      character*80 c1, c2
      common /fcom/ a, b, c1, c2

      c1(1:se1) = e1
      c2(1:se2) = e2

      write(*,'(a,a,a)') e1, "*", e2
      write(*,'(a,a,a)') c1, " ", c2

      return
      end
