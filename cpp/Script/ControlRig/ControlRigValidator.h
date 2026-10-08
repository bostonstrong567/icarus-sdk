// /Script/ControlRig.ControlRigValidator
// Derives from: UObject
// size 0x68, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Public/ControlRigValidationPass.h

UCLASS()
class UControlRigValidator : public UObject
{
public:
    UPROPERTY() TArray<UControlRigValidationPass*> Passes;  // 0x0028, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    FControlRigValidationContext ValidationContext;  // 0x0038, private
    TWeakObjectPtr<UControlRig,FWeakObjectPtr> WeakControlRig;  // 0x0060, private
};
