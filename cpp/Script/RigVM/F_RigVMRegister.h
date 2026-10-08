// /Script/RigVM.RigVMRegister
// size 0x24, declared in Engine/Source/Runtime/RigVM/Public/RigVMCore/RigVMMemory.h

USTRUCT()
struct FRigVMRegister
{
    UPROPERTY() ERigVMRegisterType Type;  // 0x0000, size 0x1
    UPROPERTY() uint32 ByteIndex;  // 0x0004, size 0x4
    UPROPERTY() uint16 ElementSize;  // 0x0008, size 0x2
    UPROPERTY() uint16 ElementCount;  // 0x000A, size 0x2
    UPROPERTY() uint16 SliceCount;  // 0x000C, size 0x2
    UPROPERTY() uint8 AlignmentBytes;  // 0x000E, size 0x1
    UPROPERTY() uint16 TrailingBytes;  // 0x0010, size 0x2
    UPROPERTY() FName Name;  // 0x0014, size 0x8
    UPROPERTY() int32 ScriptStructIndex;  // 0x001C, size 0x4
    UPROPERTY() bool bIsArray;  // 0x0020, size 0x1
    UPROPERTY() bool bIsDynamic;  // 0x0021, size 0x1
};
