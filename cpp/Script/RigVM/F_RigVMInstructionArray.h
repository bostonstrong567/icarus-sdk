// /Script/RigVM.RigVMInstructionArray
// size 0x10, declared in Engine/Source/Runtime/RigVM/Public/RigVMCore/RigVMByteCode.h

USTRUCT()
struct FRigVMInstructionArray
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() TArray<FRigVMInstruction> Instructions;  // 0x0000, size 0x10
};
