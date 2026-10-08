// /Game/UI/Components/UMG_SpacePlayerInfo.UMG_SpacePlayerInfo_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x298, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_SpacePlayerInfo_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* CharacterLevelText;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* PlayerLevelText;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* PlayerName;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* PlayerNameBox;  // 0x0280, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Initialised;  // 0x0288, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusPlayerState* PlayerState;  // 0x0290, size 0x8

    UFUNCTION() void ExecuteUbergraph_UMG_SpacePlayerInfo(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) FText GetCharacterLevelText();  // parameters 0x18
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
};
