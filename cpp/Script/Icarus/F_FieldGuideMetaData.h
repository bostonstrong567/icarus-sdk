// /Script/Icarus.FieldGuideMetaData
// size 0xF0, declared in Icarus/Source/Icarus/IcarusGenerated/FieldGuideMetaData/FieldGuideMetaDataTable.h

USTRUCT()
struct FFieldGuideMetaData : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemsStaticRowHandle Item;  // 0x0018, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UTexture2D> Image1;  // 0x0030, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Description1;  // 0x0058, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UTexture2D> Image2;  // 0x0070, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Description2;  // 0x0098, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UTexture2D> Image3;  // 0x00B0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Description3;  // 0x00D8, size 0x18
};
