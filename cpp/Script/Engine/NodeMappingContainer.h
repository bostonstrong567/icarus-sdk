// /Script/Engine.NodeMappingContainer
// Derives from: UObject
// size 0x168, declared in Engine/Source/Runtime/Engine/Public/Animation/NodeMappingContainer.h

UCLASS()
class UNodeMappingContainer : public UObject
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY(EditAnywhere) TMap<FName, FNodeItem> SourceItems;  // 0x0028, size 0x50
    UPROPERTY(EditAnywhere) TMap<FName, FNodeItem> TargetItems;  // 0x0078, size 0x50
    UPROPERTY(EditAnywhere) TMap<FName, FName> SourceToTarget;  // 0x00C8, size 0x50
    UPROPERTY(EditAnywhere) TSoftObjectPtr<UObject> SourceAsset;  // 0x0118, size 0x28
    UPROPERTY(EditAnywhere) TSoftObjectPtr<UObject> TargetAsset;  // 0x0140, size 0x28
};
