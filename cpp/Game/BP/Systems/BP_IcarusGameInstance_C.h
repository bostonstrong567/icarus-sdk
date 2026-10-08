// /Game/BP/Systems/BP_IcarusGameInstance.BP_IcarusGameInstance_C
// Derives from: UIcarusGameInstance > UGameInstance > UObject
// size 0x938, a blueprint class, blueprint

UCLASS(Transient, Config=Game)
class UBP_IcarusGameInstance_C : public UIcarusGameInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0910, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FRequestErrorEvent RequestErrorEvent;  // 0x0918, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ULevelStreamingDynamic* LoadingScreenLevel;  // 0x0928, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UTextureRenderTarget2D* RT_LoadingScreen;  // 0x0930, size 0x8

    UFUNCTION(BlueprintCallable) void CreateLoadingScreenRT();
    UFUNCTION() void ExecuteUbergraph_BP_IcarusGameInstance(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void InputTypeApplied(EInputTypeSetting Value);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void OnSessionInviteAcceptedEvent(int32 ControllerId, const FBlueprintSessionResult& InviteResult);  // parameters 0x110
    UFUNCTION(BlueprintCallable) void OnSessionInvite_DoNothing();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveInit();
    UFUNCTION(BlueprintCallable) void RequestErrorEvent__DelegateSignature(FErrorCodesEnum ErrorCode);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UpdateSentryContext();
};
