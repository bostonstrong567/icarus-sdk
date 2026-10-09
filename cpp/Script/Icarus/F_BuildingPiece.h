// /Script/Icarus.BuildingPiece
// size 0xB0, declared in Icarus/Source/Icarus/DataStructs/Building/BuildingPiece.h

USTRUCT()
struct FBuildingPiece : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBuildingLookupRowHandle Type;  // 0x0018, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UTexture2D> Icon;  // 0x0030, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftClassPtr<ABuildingBase> Blueprint;  // 0x0058, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBuildableAudioDataRowHandle Audio;  // 0x0080, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBuildingSkinsRowHandle Skin;  // 0x0098, size 0x18
};
