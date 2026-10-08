// /Game/BP/Tools/CheatFunctions/Templates/CF_Base.CF_Base_C
// Derives from: UCheatFunctionBase > UUserWidget > UWidget > UVisual > UObject
// size 0x2D9, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UCF_Base_C : public UCheatFunctionBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02A8, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) TSoftObjectPtr<UUMG_CheatFunctionBorder_C> ParentBorder;  // 0x02B0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsTopFunction;  // 0x02D8, size 0x1

    UFUNCTION() void ExecuteUbergraph_CF_Base(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetIcarusPlayerController(AIcarusPlayerController*& Controller);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) FString GetName() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable) void Set_Top_Function(bool IsTop);  // parameters 0x1, named "Set Top Function"
};
