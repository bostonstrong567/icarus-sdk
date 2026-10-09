// /Script/OnlineSubsystemIcarus.IcarusConnectionComponent
// Derives from: UIcarusConnectionComponentGen > UIcarusConnectionComponentBase > UObject
// size 0x700, declared in Icarus/Plugins/OnlineSubsystemIcarus/Source/OnlineSubsystemIcarus/Public/IcarusConnectionComponent.h

UCLASS()
class UIcarusConnectionComponent : public UIcarusConnectionComponentGen
{
public:
    TMulticastDelegate<void __cdecl(bool,FString const &),FDefaultDelegateUserPolicy> OnResGameDataDelegate;  // 0x05F8, not reflected
    TMulticastDelegate<void __cdecl(bool,FMatchUpdate const &),FDefaultDelegateUserPolicy> OnMatchUpdate;  // 0x0610, not reflected
    TMulticastDelegate<void __cdecl(TArray<FStorageInfo,TSizedDefaultAllocator<32> > const &),FDefaultDelegateUserPolicy> OnResStorageInfoDelegate;  // 0x0628, not reflected
    TMulticastDelegate<void __cdecl(bool,TSharedRef<FIcarusWSFrame,1> const &),FDefaultDelegateUserPolicy> OnResLoadStorageDelegate;  // 0x0640, not reflected
    TMulticastDelegate<void __cdecl(FCommonStorageResponse const &),FDefaultDelegateUserPolicy> OnResWriteStorageDelegate;  // 0x0658, not reflected
    TMulticastDelegate<void __cdecl(FCommonStorageResponse const &),FDefaultDelegateUserPolicy> OnResDeleteStorageDelegate;  // 0x0670, not reflected
    TMulticastDelegate<void __cdecl(FCommonResponse const &),FDefaultDelegateUserPolicy> OnResClearStorageDelegate;  // 0x0688, not reflected
    TMulticastDelegate<void __cdecl(void),FDefaultDelegateUserPolicy> OnReqUpdateConnectionString;  // 0x06A0, not reflected
    TMulticastDelegate<void __cdecl(FConnectionString const &),FDefaultDelegateUserPolicy> OnUpdateConnectionString;  // 0x06B8, not reflected
    TMulticastDelegate<void __cdecl(FUpdateLobbyStatus const &),FDefaultDelegateUserPolicy> OnUpdateLobbyStatus;  // 0x06D0, not reflected
    TMulticastDelegate<void __cdecl(FIcarusChatMessage const &),FDefaultDelegateUserPolicy> OnChatMessage;  // 0x06E8, not reflected
};
