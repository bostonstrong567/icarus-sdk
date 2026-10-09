// /Script/Engine.PluginCommandlet
// Derives from: UCommandlet > UObject
// size 0xA0, declared in Engine/Source/Runtime/Engine/Classes/Commandlets/PluginCommandlet.h

UCLASS(Transient)
class UPluginCommandlet : public UCommandlet
{
public:
    TArray<FString,TSizedDefaultAllocator<32> > CmdLineTokens;  // 0x0080, not reflected
    TArray<FString,TSizedDefaultAllocator<32> > CmdLineSwitches;  // 0x0090, not reflected
};
