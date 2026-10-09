// /Script/Engine.VectorCurve
// size 0x198, declared in Engine/Source/Runtime/Engine/Public/Animation/AnimCurveTypes.h

USTRUCT()
struct FVectorCurve : public FAnimCurveBase
{
public:
    UPROPERTY() FRichCurve FloatCurves;  // 0x0018, size 0x80
};
