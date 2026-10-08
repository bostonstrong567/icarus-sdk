// /Script/HairStrandsCore.GroomCreateBindingOptions
// Derives from: UObject
// size 0x58, declared in Engine/Plugins/Runtime/HairStrands/Source/HairStrandsCore/Public/GroomCreateBindingOptions.h

UCLASS(Config=EditorPerProjectUserSettings)
class UGroomCreateBindingOptions : public UObject
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EGroomBindingMeshType GroomBindingType;  // 0x0028, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) USkeletalMesh* SourceSkeletalMesh;  // 0x0030, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) USkeletalMesh* TargetSkeletalMesh;  // 0x0038, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UGeometryCache* SourceGeometryCache;  // 0x0040, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UGeometryCache* TargetGeometryCache;  // 0x0048, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 NumInterpolationPoints;  // 0x0050, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MatchingSection;  // 0x0054, size 0x4
};
