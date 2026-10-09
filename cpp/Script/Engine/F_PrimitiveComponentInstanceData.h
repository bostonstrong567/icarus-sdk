// /Script/Engine.PrimitiveComponentInstanceData
// size 0x100, declared in Engine/Source/Runtime/Engine/Classes/Components/PrimitiveComponent.h

USTRUCT()
struct FPrimitiveComponentInstanceData : public FSceneComponentInstanceData
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() FTransform ComponentTransform;  // 0x00C0, size 0x30
    UPROPERTY() int32 VisibilityId;  // 0x00F0, size 0x4
    UPROPERTY(Instanced) UPrimitiveComponent* LODParent;  // 0x00F8, size 0x8
};
