// /Script/Engine.RuntimeOptionsBase
// Derives from: UObject
// size 0x38, declared in Engine/Source/Runtime/Engine/Classes/Engine/RuntimeOptionsBase.h

UCLASS(Abstract, Config=RuntimeOptions)
class URuntimeOptionsBase : public UObject
{
public:

    // Not reflected: the engine's scripting cannot see these.
    FString OptionCommandPrefix;  // 0x0028, protected
};
