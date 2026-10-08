// /Script/ControlRig.ControlRigAnimInstanceProxy
// size 0x810, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Public/ControlRigAnimInstance.h

USTRUCT()
struct FControlRigAnimInstanceProxy : public FAnimInstanceProxy
{

    // Not reflected:
    TMap<int,FTransform,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FTransform,0> > StoredTransforms;  // 0x0770
    TMap<unsigned short,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned short,float,0> > StoredCurves;  // 0x07C0
};
