// /Script/ControlRig.ControlRigSettingsPerPinBool
// size 0x50, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Public/Settings/ControlRigSettings.h

USTRUCT()
struct FControlRigSettingsPerPinBool
{
public:
    UPROPERTY(EditAnywhere) TMap<FString, bool> Values;  // 0x0000, size 0x50
};
