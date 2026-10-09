// /Script/Engine.RuntimeOptionsBase
// Derives from: UObject
// size 0x38, declared in Engine/Source/Runtime/Engine/Classes/Engine/RuntimeOptionsBase.h

UCLASS(Abstract, Config=RuntimeOptions)
class URuntimeOptionsBase : public UObject
{
protected:
    FString OptionCommandPrefix;  // 0x0028, not reflected
};
