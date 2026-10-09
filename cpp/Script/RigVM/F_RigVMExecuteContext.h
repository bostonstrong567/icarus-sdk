// /Script/RigVM.RigVMExecuteContext
// size 0x58, declared in Engine/Source/Runtime/RigVM/Public/RigVMCore/RigVMExecuteContext.h

USTRUCT()
struct FRigVMExecuteContext
{
public:
    FName EventName;  // 0x0000, not reflected
    FName FunctionName;  // 0x0008, not reflected
    uint16 InstructionIndex;  // 0x0010, not reflected
    FRigVMFixedArray<void *> OpaqueArguments;  // 0x0018, not reflected
    TArray<FRigVMExternalVariable,TSizedDefaultAllocator<32> > ExternalVariables;  // 0x0028, not reflected
    TArray<FRigVMSlice,TSizedDefaultAllocator<32> > Slices;  // 0x0038, not reflected
    TArray<unsigned short,TSizedDefaultAllocator<32> > SliceOffsets;  // 0x0048, not reflected
};
