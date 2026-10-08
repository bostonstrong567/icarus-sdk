// /Script/Niagara.NiagaraDebugHUDSettings
// Derives from: UObject
// size 0x128, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Public/NiagaraDebuggerCommon.h

UCLASS(Config=EditorPerProjectUserSettings)
class UNiagaraDebugHUDSettings : public UObject
{
public:
    UPROPERTY(EditAnywhere, Config) FNiagaraDebugHUDSettingsData Data;  // 0x0048, size 0xE0

    // Not reflected: the engine's scripting cannot see these.
    TMulticastDelegate<void __cdecl(void),FDefaultDelegateUserPolicy> OnChangedDelegate;  // 0x0030
};
