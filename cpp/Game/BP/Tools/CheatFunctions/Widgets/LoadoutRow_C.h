// /Game/BP/Tools/CheatFunctions/Widgets/LoadoutRow.LoadoutRow_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x288, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class ULoadoutRow_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced) UTextBlock* TextBlock_56;  // 0x0268, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText LoadoutName;  // 0x0270, size 0x18

    UFUNCTION(BlueprintCallable) void AddLoadout(FName Loadout);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_LoadoutRow(int32 EntryPoint);  // parameters 0x4
};
