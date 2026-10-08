// /Script/OnlineSubsystemIcarus.IcarusConnectionComponentBase
// Derives from: UObject
// size 0x1D8, declared in Icarus/Plugins/OnlineSubsystemIcarus/Source/OnlineSubsystemIcarus/Public/IcarusConnectionComponentBase.h

UCLASS()
class UIcarusConnectionComponentBase : public UObject
{
public:
    UPROPERTY(EditAnywhere) FString AddressAndPort;  // 0x0070, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    TMulticastDelegate<void __cdecl(bool),FDefaultDelegateUserPolicy> OnConnect;  // 0x0028
    TMulticastDelegate<void __cdecl(void),FDefaultDelegateUserPolicy> OnResPongDelegate;  // 0x0040
    TMulticastDelegate<void __cdecl(void),FDefaultDelegateUserPolicy> OnResInvalidTokenDelegate;  // 0x0058
    TMap<FName,TDelegate<void __cdecl(TSharedRef<FIcarusWSFrame,1> const &),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TDelegate<void __cdecl(TSharedRef<FIcarusWSFrame,1> const &),FDefaultDelegateUserPolicy>,0> > FrameHandler;  // 0x0080, protected
    TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0> > FrameCommandPairs;  // 0x00D0, protected
    FOnlineSubsystemIcarus * OnlineSubsystemIcarus;  // 0x0120, protected
    ELoginFailure LoginErrorCode;  // 0x0128, protected
    TSharedPtr<IWebSocket,0> WebSocket;  // 0x0130, private
    TArray<unsigned char,TSizedDefaultAllocator<32> > ReceiveBuffer;  // 0x0140, private
    FOnlineAccountCredentials AccountCredentials;  // 0x0150, private
    float ReconnectTimer;  // 0x0180, private
    int32 ReconnectAttempts;  // 0x0184, private
    int32 MaxReconnectTime;  // 0x0188, private
    bool bEnabledReconnect;  // 0x018C, private
    FDelegateHandle ReconnectTimerDelegateHandle;  // 0x0190, private
    TSharedPtr<FIcarusConnectionPingManager,1> IcarusConnectionPingManager;  // 0x0198, private
    int64 RequestTimeout;  // 0x01A8, private
    TArray<UIcarusConnectionComponentBase::FFrameTimeout,TSizedDefaultAllocator<32> > ReqFrameBuffers;  // 0x01B0, private
    TDelegate<bool __cdecl(float),FDefaultDelegateUserPolicy> TickDelegate;  // 0x01C0, private
    FDelegateHandle TickDelegateHandle;  // 0x01D0, private

    UFUNCTION(BlueprintCallable, BlueprintPure) FString GetAuthId() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) FString GetAuthToken() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) FString GetAuthType() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) ELoginFailure GetLoginErrorCode() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetReconnectAttempts() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetReconnectTimer() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsConnected() const;  // parameters 0x1

    // Virtual functions that start here:
    //   Connect, GetLoginErrorCode, Initialize, IsConnected, IsOnlineMode, WriteFrame
};
