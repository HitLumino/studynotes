* (http://blog.csdn.net/wojiushixiangshi/article/details/78356271)
```c
/usr/local/include/eigen3/Eigen/src/plugins/CommonCwiseBinaryOps.h:19:1: error: ‘difference’ was not declared in this scope
 EIGEN_MAKE_CWISE_BINARY_OP(operator-,difference)
 ^
/usr/include/eigen3/Eigen/src/Core/util/Macros.h:831:75: error: wrong number of template arguments (1, should be 3)
   EIGEN_DEVICE_FUNC EIGEN_STRONG_INLINE const CwiseBinaryOp<FUNCTOR<Scalar>, const Derived, const OtherDerived> \
                                                                           ^
In file included from /usr/include/eigen3/Eigen/Core:296:0,
                 from /usr/include/eigen3/Eigen/Dense:1,
                 from /usr/include/mrpt/base/include/mrpt/utils/types_math.h:31,
                 from /usr/include/mrpt/base/include/mrpt/math/CMatrixFixedNumeric.h:14,
                 from /usr/include/mrpt/base/include/mrpt/poses/CPoseOrPoint.h:12,
                 from /usr/include/mrpt/base/include/mrpt/poses/CPose.h:12,
                 from /usr/include/mrpt/base/include/mrpt/poses/CPose3D.h:12,
                 from /usr/include/mrpt/opengl/include/mrpt/opengl/CRenderizable.h:15,
                 from /usr/include/mrpt/opengl/include/mrpt/opengl.h:15,
                 from /home/lumino/hitlumino/pl-slam-master/include/slamScene.h:25,
                 from /home/lumino/hitlumino/pl-slam-master/src/slamScene.cpp:22:

```
