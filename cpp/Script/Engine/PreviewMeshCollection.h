// /Script/Engine.PreviewMeshCollection
// Derives from: UDataAsset > UObject
// size 0x50, declared in Engine/Source/Runtime/Engine/Classes/Engine/PreviewMeshCollection.h

UCLASS(MinimalAPI)
class UPreviewMeshCollection : public UDataAsset, public IPreviewCollectionInterface
{
public:
    UPROPERTY(EditAnywhere) USkeleton* Skeleton;  // 0x0038, size 0x8
    UPROPERTY(EditAnywhere) TArray<FPreviewMeshCollectionEntry> SkeletalMeshes;  // 0x0040, size 0x10
};
