// /Script/OnlineSubsystemIcarus.IcarusMessageListeners
// Derives from: UObject
// size 0x78, declared in Icarus/Plugins/OnlineSubsystemIcarus/Source/OnlineSubsystemIcarus/Public/IcarusMessageListeners.h

UCLASS()
class UIcarusMessageListeners : public UObject
{
public:
    UPROPERTY(BlueprintAssignable) FOnConnectMessage OnConnectMessage;  // 0x0028, size 0x10
    UPROPERTY(BlueprintAssignable) FOnLoginFailMessage OnLoginFailMessage;  // 0x0038, size 0x10
    UPROPERTY(BlueprintAssignable) FOnMatchUpdateMessage OnMatchUpdateMessage;  // 0x0048, size 0x10
    UPROPERTY(BlueprintAssignable) FOnUpdateConnectionStringMessage OnUpdateConnectionStringMessage;  // 0x0058, size 0x10
    UPROPERTY(BlueprintAssignable) FOnChatMessage OnChatMessage;  // 0x0068, size 0x10
};
