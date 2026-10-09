// /Script/Engine.SplineInstanceData
// size 0x1A0, declared in Engine/Source/Runtime/Engine/Classes/Components/SplineComponent.h

USTRUCT()
struct FSplineInstanceData : public FSceneComponentInstanceData
{
public:
    UPROPERTY() bool bSplineHasBeenEdited;  // 0x00B8, size 0x1
    UPROPERTY() FSplineCurves SplineCurves;  // 0x00C0, size 0x70
    UPROPERTY() FSplineCurves SplineCurvesPreUCS;  // 0x0130, size 0x70
};
