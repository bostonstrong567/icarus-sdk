// /Script/Engine.Rig
// Derives from: UObject
// size 0x50, declared in Engine/Source/Runtime/Engine/Classes/Animation/Rig.h

UCLASS(MinimalAPI)
class URig : public UObject, public INodeMappingProviderInterface
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY(EditAnywhere) TArray<FTransformBase> TransformBases;  // 0x0030, size 0x10
    UPROPERTY(EditAnywhere) TArray<FNode> Nodes;  // 0x0040, size 0x10
};
