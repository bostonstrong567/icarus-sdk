// /Game/BP/Tools/CheatFunctions/Widgets/AIrow.AIRow_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2A0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UAIRow_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced) UTextBlock* TextBlock_56;  // 0x0268, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText SetupName;  // 0x0270, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAISetupRowHandle AISetup;  // 0x0288, size 0x18

    UFUNCTION(BlueprintCallable) void AddAI(FText RowName);  // parameters 0x18
    UFUNCTION() void ExecuteUbergraph_AIRow(int32 EntryPoint);  // parameters 0x4
};
