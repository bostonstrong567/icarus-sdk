// /Game/UI/Components/FieldGuide/UMG_FieldGuide_Fish_Page.UMG_FieldGuide_Fish_Page_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x478, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_FieldGuide_Fish_Page_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* BiomeImage;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_FieldGuide_Fish_Stat_C* CaughtStat;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* CreatureImage;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* CreatureName;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* FishImage;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* FishRarity;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_1;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_2;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_58;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_112;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_FieldGuide_Fish_Stat_C* LengthStat;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* LocationText;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_IcarusGrid_C* LureGrid;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_FieldGuide_Fish_Stat_C* QualityStat;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* Tags;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BestiaryLore_C* UMG_BestiaryLore;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_FieldGuide_Fish_Stat_C* WeightStat;  // 0x02F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFishDataRowHandle Fish;  // 0x02F8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FClose Close;  // 0x0310, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Discovered;  // 0x0320, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFishData Fish_Data;  // 0x0328, size 0xE0, named "Fish Data"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Biomes;  // 0x0408, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor FreshwaterColour;  // 0x0420, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor Text_Brush_Colour;  // 0x0430, size 0x28, named "Text Brush Colour"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor TerrainColor;  // 0x0458, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor SaltwaterColour;  // 0x0468, size 0x10

    UFUNCTION(BlueprintCallable) void Close__DelegateSignature();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_FieldGuide_Fish_Page(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnLoaded_712ED9A845A85CC2E8EB51B9C70343CF(UObject* Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
};
