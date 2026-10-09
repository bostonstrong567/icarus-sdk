// /Script/Engine.SplineMeshInstanceData
// size 0xE8, declared in Engine/Source/Runtime/Engine/Classes/Components/SplineMeshComponent.h

USTRUCT()
struct FSplineMeshInstanceData : public FSceneComponentInstanceData
{
public:
    UPROPERTY() FVector StartPos;  // 0x00B8, size 0xC
    UPROPERTY() FVector EndPos;  // 0x00C4, size 0xC
    UPROPERTY() FVector StartTangent;  // 0x00D0, size 0xC
    UPROPERTY() FVector EndTangent;  // 0x00DC, size 0xC
};
