// /Script/Icarus.CheatOverlayBase
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x350, declared in Icarus/Source/Icarus/UI/Cheats/CheatOverlayBase.h

UCLASS(EditInlineNew, MinimalAPI)
class UCheatOverlayBase : public UUserWidget
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(BlueprintAssignable) FOnScriptQueueFinished OnScriptQueueFinished;  // 0x0270, size 0x10
    TMulticastDelegate<void __cdecl(void),FDefaultDelegateUserPolicy> NativeOnScriptQueueFinished;  // 0x0280, not reflected
    UPROPERTY(BlueprintAssignable) FOnCheatScriptFinished OnCheatScriptFinished;  // 0x0298, size 0x10
    TQueue<FString,1> ScriptQueue;  // 0x02C0, not reflected
    bool bWaiting;  // 0x02D0, not reflected
    bool bShow;  // 0x02D1, not reflected
    bool bPendingReloadCheats;  // 0x02D2, not reflected
    TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0> > VariableMap;  // 0x02D8, not reflected
    UCheatFunctionBase * LastTopWidget;  // 0x0328, not reflected
    FString LastKey;  // 0x0330, not reflected
protected:
    UPROPERTY(BlueprintReadWrite) TArray<UCheatFunctionBase*> CheatFunctionWidgets;  // 0x02A8, size 0x10
private:
    TArray<FString,TSizedDefaultAllocator<32> > BeginPlayScript;  // 0x0260, not reflected
    bool bReloadedCheatsThisFrame;  // 0x0340, not reflected
public:
    UFUNCTION(BlueprintImplementableEvent) void AddCheat(UCheatFunctionBase* Widget);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void AddCustomAutomationFunction(FString Name, const TArray<FString>& ScriptLines, FString Description);  // parameters 0x30
    UFUNCTION(BlueprintImplementableEvent) void AddCustomFunction(FString Name, const TArray<FString>& ScriptLines, FString Description);  // parameters 0x30
    UFUNCTION(BlueprintImplementableEvent) void ClearFilteredWidgets();
    UFUNCTION(BlueprintCallable) void Close();
    UFUNCTION(BlueprintCallable) void Evaluate(FString Script);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void EvaluateLines(const TArray<FString>& ScriptLines);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsCheatScriptExecuting() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsShowing() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsWaiting() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OnBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void OnShowChanged(bool bNewShow);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void OnWaitingChanged(bool bNewWaiting);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) FString ParseCheatLineArguments(FString Line, const TArray<FString>& Args) const;  // parameters 0x30
    UFUNCTION(BlueprintCallable) void PreviewCommand(FString CommandText);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void RequestReloadCheats();
    UFUNCTION(BlueprintCallable) void SetCheatFunctionList(const TArray<TSubclassOf<UObject>>& List);  // parameters 0x10
    UFUNCTION(BlueprintCallable) bool SetCheatVariable(FString Variable, FString Value);  // parameters 0x21
    UFUNCTION(BlueprintImplementableEvent) void SetFilteredWidgets(const TArray<UCheatFunctionBase*>& Widgets);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetShow(bool bInShow);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void StartWaiting();
    UFUNCTION(BlueprintCallable) void StopWaiting();
};
