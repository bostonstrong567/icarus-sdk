// /Script/HairStrandsCore.GroomCreateStrandsTexturesOptions
// Derives from: UObject
// size 0x68, declared in Engine/Plugins/Runtime/HairStrands/Source/HairStrandsCore/Public/GroomCreateStrandsTexturesOptions.h

UCLASS(Config=EditorPerProjectUserSettings)
class UGroomCreateStrandsTexturesOptions : public UObject
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Resolution;  // 0x0028, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EStrandsTexturesTraceType TraceType;  // 0x002C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TraceDistance;  // 0x0030, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EStrandsTexturesMeshType MeshType;  // 0x0034, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UStaticMesh* StaticMesh;  // 0x0038, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) USkeletalMesh* SkeletalMesh;  // 0x0040, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 LODIndex;  // 0x0048, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 SectionIndex;  // 0x004C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 UVChannelIndex;  // 0x0050, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<int32> GroupIndex;  // 0x0058, size 0x10
};
