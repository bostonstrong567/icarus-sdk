// /Script/Engine.SceneComponentInstanceData
// size 0xB8, declared in Engine/Source/Runtime/Engine/Classes/Components/SceneComponent.h

USTRUCT()
struct FSceneComponentInstanceData : public FActorComponentInstanceData
{
public:
    UPROPERTY() TMap<USceneComponent*, FTransform> AttachedInstanceComponents;  // 0x0068, size 0x50
};
