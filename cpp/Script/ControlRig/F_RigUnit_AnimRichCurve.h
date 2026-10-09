// /Script/ControlRig.RigUnit_AnimRichCurve
// size 0x90, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Animation/RigUnit_AnimRichCurve.h

USTRUCT()
struct FRigUnit_AnimRichCurve : public FRigUnit_AnimBase
{
public:
    UPROPERTY() FRuntimeFloatCurve Curve;  // 0x0008, size 0x88
};
