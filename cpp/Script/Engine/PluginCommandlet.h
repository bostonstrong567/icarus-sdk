// /Script/Engine.PluginCommandlet
// Derives from: UCommandlet > UObject
// size 0xA0, declared in Engine/Source/Runtime/Engine/Classes/Commandlets/PluginCommandlet.h

UCLASS(Transient)
class UPluginCommandlet : public UCommandlet
{
public:

    // Not reflected: the engine's scripting cannot see these.
    TArray<FString,TSizedDefaultAllocator<32> > CmdLineTokens;  // 0x0080
    TArray<FString,TSizedDefaultAllocator<32> > CmdLineSwitches;  // 0x0090
};
