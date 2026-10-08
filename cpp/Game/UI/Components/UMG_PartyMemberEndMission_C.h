// /Game/UI/Components/UMG_PartyMemberEndMission.UMG_PartyMemberEndMission_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2A0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_PartyMemberEndMission_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* Button_88;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* ColourBorder_1;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* PlayerBorder;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* PlayerIcon_1;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* PlayerLevel;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* PlayerNameText;  // 0x0290, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) APlayerState* PlayerState;  // 0x0298, size 0x8

    UFUNCTION() void ExecuteUbergraph_UMG_PartyMemberEndMission(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) FSlateBrush GetBackground_0();  // parameters 0x88
    UFUNCTION(BlueprintCallable, BlueprintPure) FSlateColor GetColorAndOpacity();  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) FText GetPing();  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetPlayerHealth();  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) FText GetPlayerLevel();  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) FText GetPlayerName();  // parameters 0x18
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
};
