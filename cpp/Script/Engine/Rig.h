// /Script/Engine.Rig
// Derives from: UObject
// size 0x50, declared in Engine/Source/Runtime/Engine/Classes/Animation/Rig.h

UCLASS(MinimalAPI)
class URig : public UObject, public INodeMappingProviderInterface
{
public:
    UPROPERTY(EditAnywhere) TArray<FTransformBase> TransformBases;  // 0x0030, size 0x10
    UPROPERTY(EditAnywhere) TArray<FNode> Nodes;  // 0x0040, size 0x10
};
