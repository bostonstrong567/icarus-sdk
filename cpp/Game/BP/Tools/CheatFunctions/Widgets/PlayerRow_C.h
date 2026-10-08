// /Game/BP/Tools/CheatFunctions/Widgets/PlayerRow.PlayerRow_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x290, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UPlayerRow_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced) UTextBlock* TextBlock_56;  // 0x0268, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText PlayerName;  // 0x0270, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) APlayerState* Player;  // 0x0288, size 0x8

    UFUNCTION(BlueprintCallable) void AddPlayer(APlayerState* Player);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_PlayerRow(int32 EntryPoint);  // parameters 0x4
};
