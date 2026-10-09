// /Script/ControlRig.ControlRigValidationContext
// size 0x28, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Public/ControlRigValidationPass.h

USTRUCT()
struct FControlRigValidationContext
{
private:
    TDelegate<void __cdecl(void),FDefaultDelegateUserPolicy> ClearDelegate;  // 0x0000, not reflected
    TDelegate<void __cdecl(enum EMessageSeverity::Type,FRigElementKey const &,float,FString const &),FDefaultDelegateUserPolicy> ReportDelegate;  // 0x0010, not reflected
    FControlRigDrawInterface * DrawInterface;  // 0x0020, not reflected
};
