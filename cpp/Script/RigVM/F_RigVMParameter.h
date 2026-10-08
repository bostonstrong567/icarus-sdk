// /Script/RigVM.RigVMParameter
// size 0x30, declared in Engine/Source/Runtime/RigVM/Public/RigVMCore/RigVM.h

USTRUCT()
struct FRigVMParameter
{
    UPROPERTY() ERigVMParameterType Type;  // 0x0000, size 0x1
    UPROPERTY() FName Name;  // 0x0004, size 0x8
    UPROPERTY() int32 RegisterIndex;  // 0x000C, size 0x4
    UPROPERTY() FString CPPType;  // 0x0010, size 0x10
    UPROPERTY(Transient) UScriptStruct* ScriptStruct;  // 0x0020, size 0x8
    UPROPERTY() FName ScriptStructPath;  // 0x0028, size 0x8
};
