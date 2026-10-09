// /Script/Engine.TransformCurve
// size 0x4E0, declared in Engine/Source/Runtime/Engine/Public/Animation/AnimCurveTypes.h

USTRUCT()
struct FTransformCurve : public FAnimCurveBase
{
public:
    UPROPERTY() FVectorCurve TranslationCurve;  // 0x0018, size 0x198
    UPROPERTY() FVectorCurve RotationCurve;  // 0x01B0, size 0x198
    UPROPERTY() FVectorCurve ScaleCurve;  // 0x0348, size 0x198
};
