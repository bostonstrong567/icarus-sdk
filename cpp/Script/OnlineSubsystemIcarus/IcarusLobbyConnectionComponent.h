// /Script/OnlineSubsystemIcarus.IcarusLobbyConnectionComponent
// Derives from: UIcarusLobbyConnectionComponentGen > UIcarusLobbyConnectionComponentBase > UObject
// size 0x228, declared in Icarus/Plugins/OnlineSubsystemIcarus/Source/OnlineSubsystemIcarus/Public/IcarusLobbyConnectionComponent.h

UCLASS()
class UIcarusLobbyConnectionComponent : public UIcarusLobbyConnectionComponentGen
{
public:

    // Not reflected: the engine's scripting cannot see these.
    TMulticastDelegate<void __cdecl(int,float),FDefaultDelegateUserPolicy> OnLobbyTimeLeftDelegate;  // 0x01D0
    TMulticastDelegate<void __cdecl(FMaintenanceStatus const &),FDefaultDelegateUserPolicy> OnMaintenanceStatusDelegate;  // 0x01E8
    float TimeLeft;  // 0x0200, private
    FDateTime LastUpdatedTime;  // 0x0208, private
    float AvgMessagesReadyRate;  // 0x0210, private
    float LeftQueueSize;  // 0x0214, private
    TArray<float,TSizedDefaultAllocator<32> > MessagesReadyRates;  // 0x0218, private
};
