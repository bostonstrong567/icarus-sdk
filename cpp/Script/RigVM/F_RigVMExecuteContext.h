// /Script/RigVM.RigVMExecuteContext
// size 0x58, declared in Engine/Source/Runtime/RigVM/Public/RigVMCore/RigVMExecuteContext.h

USTRUCT()
struct FRigVMExecuteContext
{

    // Not reflected:
    FName EventName;  // 0x0000
    FName FunctionName;  // 0x0008
    uint16 InstructionIndex;  // 0x0010
    FRigVMFixedArray<void *> OpaqueArguments;  // 0x0018
    TArray<FRigVMExternalVariable,TSizedDefaultAllocator<32> > ExternalVariables;  // 0x0028
    TArray<FRigVMSlice,TSizedDefaultAllocator<32> > Slices;  // 0x0038
    TArray<unsigned short,TSizedDefaultAllocator<32> > SliceOffsets;  // 0x0048
};
