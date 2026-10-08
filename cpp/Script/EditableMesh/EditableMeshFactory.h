// /Script/EditableMesh.EditableMeshFactory
// Derives from: UObject
// size 0x28, declared in Engine/Plugins/Runtime/EditableMesh/Source/EditableMesh/Public/EditableMeshFactory.h

UCLASS()
class UEditableMeshFactory : public UObject
{
public:

    UFUNCTION(BlueprintCallable) static UEditableMesh* MakeEditableMesh(UPrimitiveComponent* PrimitiveComponent, int32 LODIndex);  // parameters 0x18
};
