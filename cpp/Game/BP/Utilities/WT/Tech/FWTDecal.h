// /Game/BP/Utilities/WT/Tech/FWTDecal.FWTDecal
// size 0x40

USTRUCT()
struct FWTDecal
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInterface* DecalMaterial;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTransform Transform;  // 0x0010, size 0x30
};
