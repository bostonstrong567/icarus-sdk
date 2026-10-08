// /Script/Icarus.CheatFunctionBase
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2A8, declared in Icarus/Source/Icarus/UI/Cheats/CheatFunctionBase.h

UCLASS(EditInlineNew)
class UCheatFunctionBase : public UUserWidget
{
public:
    UPROPERTY(BlueprintReadWrite) FString Name;  // 0x0260, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Description;  // 0x0270, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor TitleColour;  // 0x0288, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor AreaColor;  // 0x0298, size 0x10

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) void Execute();
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintNativeEvent) bool ForceNoBorder() const;  // parameters 0x1
    UFUNCTION(BlueprintNativeEvent) FString GetName() const;  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void UpdatePreview(const TArray<FString>& Args);  // parameters 0x10

    // Virtual functions that start here:
    //   Execute_Implementation, GetName_Implementation
};
