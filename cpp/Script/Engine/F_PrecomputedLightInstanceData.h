// /Script/Engine.PrecomputedLightInstanceData
// size 0x110, declared in Engine/Source/Runtime/Engine/Classes/Components/LightComponent.h

USTRUCT()
struct FPrecomputedLightInstanceData : public FSceneComponentInstanceData
{
    UPROPERTY() FTransform Transform;  // 0x00C0, size 0x30
    UPROPERTY() FGuid LightGuid;  // 0x00F0, size 0x10
    UPROPERTY() int32 PreviewShadowMapChannel;  // 0x0100, size 0x4
};
