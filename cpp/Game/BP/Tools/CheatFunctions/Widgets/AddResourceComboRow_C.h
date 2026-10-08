// /Game/BP/Tools/CheatFunctions/Widgets/AddResourceComboRow.AddResourceComboRow_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x298, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UAddResourceComboRow_C : public UUserWidget, public ILessInterface
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* RowIcon;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* RowText;  // 0x0270, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText DisplayName;  // 0x0278, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName RowName;  // 0x0290, size 0x8

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_AddResourceComboRow(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool LessThan(UObject* Other) const;  // parameters 0x9
};
