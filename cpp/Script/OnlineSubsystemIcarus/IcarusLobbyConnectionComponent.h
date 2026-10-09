// /Script/OnlineSubsystemIcarus.IcarusLobbyConnectionComponent
// Derives from: UIcarusLobbyConnectionComponentGen > UIcarusLobbyConnectionComponentBase > UObject
// size 0x228, declared in Icarus/Plugins/OnlineSubsystemIcarus/Source/OnlineSubsystemIcarus/Public/IcarusLobbyConnectionComponent.h

UCLASS()
class UIcarusLobbyConnectionComponent : public UIcarusLobbyConnectionComponentGen
{
public:
    TMulticastDelegate<void __cdecl(int,float),FDefaultDelegateUserPolicy> OnLobbyTimeLeftDelegate;  // 0x01D0, not reflected
    TMulticastDelegate<void __cdecl(FMaintenanceStatus const &),FDefaultDelegateUserPolicy> OnMaintenanceStatusDelegate;  // 0x01E8, not reflected
private:
    float TimeLeft;  // 0x0200, not reflected
    FDateTime LastUpdatedTime;  // 0x0208, not reflected
    float AvgMessagesReadyRate;  // 0x0210, not reflected
    float LeftQueueSize;  // 0x0214, not reflected
    TArray<float,TSizedDefaultAllocator<32> > MessagesReadyRates;  // 0x0218, not reflected
};
