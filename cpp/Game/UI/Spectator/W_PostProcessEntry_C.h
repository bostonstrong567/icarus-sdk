// /Game/UI/Spectator/W_PostProcessEntry.W_PostProcessEntry_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x298, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UW_PostProcessEntry_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FEntryChanged EntryChanged;  // 0x0268, size 0x10
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FEntryFunction EntryFunction;  // 0x0278, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFeatureLevelsEnum RequiredFeatureLevel;  // 0x0288, size 0x10

    UFUNCTION(BlueprintCallable) void EntryChanged__DelegateSignature();
    UFUNCTION(BlueprintCallable) void EntryFunction__DelegateSignature(FString Param);  // parameters 0x10
    UFUNCTION() void ExecuteUbergraph_W_PostProcessEntry(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetSaveGameValue(FPostProcessSaveData& Value);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void InitFromDefaultValue();
    UFUNCTION(BlueprintCallable) void InitFromSaveGameValue(FPostProcessSaveData Value);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsEntryEnabled();  // parameters 0x1
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdatePostProcess(FPostProcessSettings& Settings);  // parameters 0x560
};
