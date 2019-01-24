#!/usr/bin/env lua
function print()
	for i=0, 10 do
		print(i)
	end
end
local params = table.pack(...)
for i=1, params.n do
  local z = params[i]
  print(z.."\t"..type(z))
  end
os.execute("ls -la")
