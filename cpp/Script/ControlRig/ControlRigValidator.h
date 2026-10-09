// /Script/ControlRig.ControlRigValidator
// Derives from: UObject
// size 0x68, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Public/ControlRigValidationPass.h

UCLASS()
class UControlRigValidator : public UObject
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() TArray<UControlRigValidationPass*> Passes;  // 0x0028, size 0x10
    FControlRigValidationContext ValidationContext;  // 0x0038, not reflected
    TWeakObjectPtr<UControlRig,FWeakObjectPtr> WeakControlRig;  // 0x0060, not reflected
};
