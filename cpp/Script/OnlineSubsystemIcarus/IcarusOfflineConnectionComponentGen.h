// /Script/OnlineSubsystemIcarus.IcarusOfflineConnectionComponentGen
// Derives from: UIcarusConnectionComponent > UIcarusConnectionComponentGen > UIcarusConnectionComponentBase > UObject
// size 0x760, declared in Icarus/Plugins/OnlineSubsystemIcarus/Source/OnlineSubsystemIcarus/Public/IcarusGenerated/OfflineConnection/IcarusOfflineConnectionComponentGen.h

UCLASS()
class UIcarusOfflineConnectionComponentGen : public UIcarusConnectionComponent
{
public:

    // Not reflected: the engine's scripting cannot see these.
    TMap<FName,TDelegate<void __cdecl(TSharedRef<FIcarusWSFrame,1> const &,TSharedRef<FIcarusWSFrame,1> &),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TDelegate<void __cdecl(TSharedRef<FIcarusWSFrame,1> const &,TSharedRef<FIcarusWSFrame,1> &),FDefaultDelegateUserPolicy>,0> > OfflineFrameHandler;  // 0x0700, protected
    TSharedPtr<FIcarusOfflineDatabaseGen,1> OfflineDataBasePtr;  // 0x0750, protected
};
